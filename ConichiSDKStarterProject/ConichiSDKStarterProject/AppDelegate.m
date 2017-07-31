//
//  AppDelegate.m
//  ConichiSDKStarterProject
//
//  Created by Anton Domashnev on 12/09/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "AppDelegate.h"

@import CNISDKCoreKit;
@import CNISDKPaymentKit;
@import CNISDKPMSKit;
@import CNISDKGeoFencingKit;

@interface AppDelegate () <CNISDKDelegate>

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // ****************************************************************************
    // Initialize Conichi SDK Payment, PMS and GeoFencing kits
    // ****************************************************************************
    
    //Initializing GeoFencing Kit
    CNISDKGeoFencingKitConfiguration *geoFencingKitConfiguration = [CNISDKGeoFencingKitConfiguration configurationWithBlock:^(id<CNISDKMutableGeoFencingKitConfiguration>  _Nonnull configuration) {
        configuration.geoFenceRadiusInMeters = 50;
    }];
    CNISDKKitBundle *geoFencingBundle = [CNISDKKitBundle bundleWithKit:[CNISDKGeoFencing class] configuration:geoFencingKitConfiguration];
    
    //Initializing Payment Kit
    CNISDKPaymentKitConfiguration *paymentKitConfiguration = [CNISDKPaymentKitConfiguration configurationWithBlock:^(id<CNISDKMutablePaymentKitConfiguration>  _Nonnull configuration) {
        // Add your Payleven API key you can take it from https://service.payleven.com/uk/developer?product=apppay:
        configuration.paymentKey = @"your payleven API key";
    }];
    CNISDKKitBundle *paymentBundle = [CNISDKKitBundle bundleWithKit:[CNISDKPayment class] configuration:paymentKitConfiguration];
    
    //Initializing PMS Kit this one comes without internal configuration
    CNISDKKitBundle *pmsBundle = [CNISDKKitBundle bundleWithKit:[CNISDKPMS class] configuration:nil];
    
    // ****************************************************************************
    // Initialize Conichi SDK Core
    // ****************************************************************************
    
    CNISDKConfiguration *coreConfiguration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration>  _Nonnull configuration) {
        configuration.apiKey = @"YOUR API KEY";
        configuration.apiSecret = @"YOUR API SECRET";
        configuration.environment = CNISDKEnvironmentSandbox;
        
        // Uncomment the following lines to set up sdk with your specific URL (optionally)
        // configuration.environment = CNISDKEnvironmentProduction;
        // configuration.baseURL = [NSURL URLWithString:@"https://kpmg.conichi.com"];
        
        // Uncomment the following line and change to expected log level;
        // configuration.logLevel = CNISDKLogLevelWarning;
    
        configuration.kits = @[geoFencingBundle, paymentBundle, pmsBundle];
    }];
    [CNISDK startWithConfiguration:coreConfiguration delegate:nil];
    
    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
