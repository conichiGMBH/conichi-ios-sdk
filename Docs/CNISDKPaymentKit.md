## conichiSDK Payment Kit

### Dependency

This `kit` is dependent on the following:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)

### Overview

The `conichiSDK PaymentKit` provides the abstraction to manage guest's credit cards - add, edit or delete. Also, it adds the ability to add additional items for the guest's pre check-in or checkout request.
__Important__ this `kit` is an abstract kit and can be used only as a dependency for specific provider's `kit`.

### Installation

See installation guides for specific provider's `kit`.

### Getting Started

The abstract `CNISDKPaymentKit` provides two `protocols` to simplify integration of specific payment provider:

```
/*
 * Describes the object that can perform synchronization of guest's
 * payment instruments between payment provider and conichi
 */
@protocol CNISDKPaymentInstrumentsSynchronizer

- (void)synchronizePaymentInstrumentsForGuest:(CNISDKGuest *)guest;

- (void)synchronizePaymentInstrumentsForGuest:(CNISDKGuest *)guest completion:(CNISDKBooleanErrorBlock)completion;

@end
```

```
/*
 * Describes the object that manages payment instruments for guest (add/update/delete)
 */
@protocol CNISDKPaymentInstrumentManager

- (void)addPaymentInstrument:(CNISDKPaymentInstrument *)paymentInstrument billingAddress:(CNISDKPaymentBillingAddress *)address forGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestCreditCardErrorBlock)completion;

- (void)deletePaymentInstrumentWithID:(NSString *)conichiID useCase:(NSString *)useCase fromGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestErrorBlock)completion;

- (void)updatePaymentInstrument:(NSString *)conichiID billingAddress:(CNISDKPaymentBillingAddress *)billingAddress forGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestCreditCardErrorBlock)completion;

@end
```

Each specific provider's `kit` has it's own implementation of the protocols above. So switching from one kit to another is made easy in terms of code.
