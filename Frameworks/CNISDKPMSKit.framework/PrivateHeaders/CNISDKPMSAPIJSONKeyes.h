//
//  CNISDKPMSAPIJSONKeyes.h
//  conichiSDK
//
//  Created by Anton Domashnev on 26/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

extern const struct CNISDKReservationJSONKeyes {
    __unsafe_unretained NSString *checkinConichiID;
    __unsafe_unretained NSString *guestConichiID;
    __unsafe_unretained NSString *venueConichiID;
    __unsafe_unretained NSString *externalReservationID;
    __unsafe_unretained NSString *internalReservationID;
    __unsafe_unretained NSString *checkinDate;
    __unsafe_unretained NSString *checkoutDate;
    __unsafe_unretained NSString *priceCurrencyCode;
    __unsafe_unretained NSString *totalStayPriceAmount;
    __unsafe_unretained NSString *roomNumber;
    __unsafe_unretained NSString *reservetionistLastName;
    __unsafe_unretained NSString *guests;
    __unsafe_unretained NSString *notSyncedPaidPriceAmount;
    __unsafe_unretained NSString *mobileCheckinOpen;
    __unsafe_unretained NSString *reservationInfo;
    __unsafe_unretained NSString *remainPriceAmountToPay;
    __unsafe_unretained NSString *statusStringRepresentation;
    __unsafe_unretained NSString *clientSideID;
} CNISDKReservationJSONKeyes;

extern const struct CNISDKReservationGuestJSONKeyes {
    __unsafe_unretained NSString *firstName;
    __unsafe_unretained NSString *lastName;
    __unsafe_unretained NSString *profileCode;
} CNISDKReservationGuestJSONKeyes;

extern const struct CNISDKFolioJSONKeyes {
    __unsafe_unretained NSString *folioID;
    __unsafe_unretained NSString *outstandingAmount;
    __unsafe_unretained NSString *paymentCurrency;
    __unsafe_unretained NSString *deliverables;
} CNISDKFolioJSONKeyes;

extern const struct CNISDKFolioDeliverableItemJSONKeyes {
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *code;
    __unsafe_unretained NSString *price;
    __unsafe_unretained NSString *currency;
} CNISDKFolioDeliverableItemJSONKeyes;
