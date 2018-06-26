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
@import CNISDKSumUpKit;
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
    
    //Initializing SumUp Kit
    CNISDKSumUpKitConfiguration *sumUpKitConfiguration = [CNISDKSumUpKitConfiguration configurationWithBlock:^(id<CNISDKMutableSumUpKitConfiguration>  _Nonnull configuration) {}];
    CNISDKKitBundle *sumUpBundle = [CNISDKKitBundle bundleWithKit:[CNISDKSumUp class] configuration:sumUpKitConfiguration];
    
    //Initializing PMS Kit this one comes without internal configuration
    CNISDKKitBundle *pmsBundle = [CNISDKKitBundle bundleWithKit:[CNISDKPMS class] configuration:nil];
    
    // ****************************************************************************
    // Initialize Conichi SDK Core
    // ****************************************************************************
    
    CNISDKConfiguration *coreConfiguration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration>  _Nonnull configuration) {
        configuration.apiKey = @"YOUR API KEY";
        configuration.apiSecret = @"YOUR API SECRET";
        configuration.environment = CNISDKEnvironmentStaging;
        
        // Uncomment the following lines to set up sdk with your specific URL (optionally)
        // configuration.environment = CNISDKEnvironmentProduction;
        // configuration.baseURL = [NSURL URLWithString:@"https://kpmg.conichi.com"];
        
        // Uncomment the following line and change to expected log level;
        // configuration.logLevel = CNISDKLogLevelWarning;
    
        configuration.kits = @[geoFencingBundle, sumUpBundle, pmsBundle];
    }];
    [CNISDK startWithConfiguration:coreConfiguration delegate:nil];
    
    return YES;
}

@end
