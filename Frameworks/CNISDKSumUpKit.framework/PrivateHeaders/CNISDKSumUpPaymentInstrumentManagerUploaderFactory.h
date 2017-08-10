//
//  CNISDKSumUpPaymentInstrumentManagerUploaderFactory.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 13.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNISDKSumUpPaymentInstrumentManagerUploader;
@class CNISDKAPIManager;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKSumUpPaymentInstrumentManagerUploaderFactory : NSObject

- (CNISDKSumUpPaymentInstrumentManagerUploader *)createSumUpPaymentInstrumentManagerUploaderWithAPIManager:(CNISDKAPIManager *)apiManager;

@end

NS_ASSUME_NONNULL_END
