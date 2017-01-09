//
//  CNISDKAPIJSONKeyes.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/28/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

extern const struct CNISDKJSONKeyes {
    __unsafe_unretained NSString *user;
    __unsafe_unretained NSString *sessionID;
} CNISDKJSONKeyes;

extern const struct CNISDKSocialJSONKeyes {
    __unsafe_unretained NSString *authToken;
    __unsafe_unretained NSString *authSecret;
} CNISDKSocialJSONKeyes;

extern const struct CNISDKPasswordJSONKeyes {
    __unsafe_unretained NSString *password;
    __unsafe_unretained NSString *currentPassword;
    __unsafe_unretained NSString *confirmedPassword;
} CNISDKPasswordJSONKeyes;

extern const struct CNISDKObjectJSONKeyes {
    __unsafe_unretained NSString *conichiID;
} CNISDKObjectJSONKeyes;

extern const struct CNISDKGuestStatusInfoJSONKeyes {
    __unsafe_unretained NSString *status;
    __unsafe_unretained NSString *checkin;
    __unsafe_unretained NSString *trackin;
    __unsafe_unretained NSString *preCheckin;
} CNISDKGuestStatusInfoJSONKeyes;

extern const struct CNISDKGuestJSONKeyes {
    __unsafe_unretained NSString *createdAt;
    __unsafe_unretained NSString *infoProvider;
    __unsafe_unretained NSString *firstName;
    __unsafe_unretained NSString *lastName;
    __unsafe_unretained NSString *email;
    __unsafe_unretained NSString *externalEmail;
    __unsafe_unretained NSString *externalID;
    __unsafe_unretained NSString *picturePath;
    __unsafe_unretained NSString *dateOfBirthday;
    __unsafe_unretained NSString *locale;
    __unsafe_unretained NSString *gender;
    __unsafe_unretained NSString *nationality;
    __unsafe_unretained NSString *paylevenToken;
    __unsafe_unretained NSString *optionalValue;
    __unsafe_unretained NSString *status;
    __unsafe_unretained NSString *creditCards;
    __unsafe_unretained NSString *personalAddress;
    __unsafe_unretained NSString *businessAddress;
    __unsafe_unretained NSString *travelDocument;
    __unsafe_unretained NSString *preferences;
    __unsafe_unretained NSString *taxInfo;
    __unsafe_unretained NSString *apnToken;
} CNISDKGuestJSONKeyes;

extern const struct CNISDKPersonalAddressJSONKeyes {
    __unsafe_unretained NSString *street;
    __unsafe_unretained NSString *city;
    __unsafe_unretained NSString *countryCode;
    __unsafe_unretained NSString *zip;
} CNISDKPersonalAddressJSONKeyes;

extern const struct CNISDKAPIInfoJSONKeyes {
    __unsafe_unretained NSString *version;
} CNISDKAPIInfoJSONKeyes;

extern const struct CNISDKBeaconJSONKeyes {
    __unsafe_unretained NSString *major;
    __unsafe_unretained NSString *minor;
    __unsafe_unretained NSString *welcomeMessage;
    __unsafe_unretained NSString *farewellMessage;
    __unsafe_unretained NSString *regionConichiID;
} CNISDKBeaconJSONKeyes;

extern const struct CNISDKBusinessCreditCardJSONKeyes {
    __unsafe_unretained NSString *lastFourDigits;
    __unsafe_unretained NSString *brand;
    __unsafe_unretained NSString *useCase;
    __unsafe_unretained NSString *externalIdentifier;
    __unsafe_unretained NSString *address;
} CNISDKBusinessCreditCardJSONKeyes;

extern const struct CNISDKCheckinJSONKeyes {
    __unsafe_unretained NSString *status;
    __unsafe_unretained NSString *rating;
    __unsafe_unretained NSString *closedAt;
    __unsafe_unretained NSString *createdAt;
    __unsafe_unretained NSString *associatedVenue;
    __unsafe_unretained NSString *reservation;
} CNISDKCheckinJSONKeyes;

extern const struct CNISDKCheckoutRequestJSONKeyes {
    __unsafe_unretained NSString *state;
    __unsafe_unretained NSString *user;
    __unsafe_unretained NSString *venue;
    __unsafe_unretained NSString *deliverableItems;
} CNISDKCheckoutRequestJSONKeyes;

extern const struct CNISDKDeliverableCategoryJSONKeyes {
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *code;
    __unsafe_unretained NSString *items;
    __unsafe_unretained NSString *displayOrder;
    __unsafe_unretained NSString *categories;
    __unsafe_unretained NSString *useCase;
} CNISDKDeliverableCategoryJSONKeyes;

extern const struct CNISDKDeliverableCountableItemJSONKeyes {
    __unsafe_unretained NSString *deliverableItem_conichiID;
    __unsafe_unretained NSString *count;
    __unsafe_unretained NSString *deliverableItem;
} CNISDKDeliverableCountableItemJSONKeyes;

extern const struct CNISDKDeliverableItemJSONKeyes {
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *code;
    __unsafe_unretained NSString *price;
    __unsafe_unretained NSString *currency;
} CNISDKDeliverableItemJSONKeyes;

extern const struct CNISDKNotificationJSONKeyes {
    __unsafe_unretained NSString *title;
    __unsafe_unretained NSString *message;
    __unsafe_unretained NSString *read;
    __unsafe_unretained NSString *favourite;
    __unsafe_unretained NSString *type;
    __unsafe_unretained NSString *venueName;
    __unsafe_unretained NSString *createdAt;
} CNISDKNotificationJSONKeyes;

extern const struct CNISDKPreCheckinRequestJSONKeyes {
    __unsafe_unretained NSString *status;
    __unsafe_unretained NSString *arriveDate;
    __unsafe_unretained NSString *departureDate;
    __unsafe_unretained NSString *arriveTime;
    __unsafe_unretained NSString *venue;
    __unsafe_unretained NSString *requestedItems;
} CNISDKPreCheckinRequestJSONKeyes;

extern const struct CNISDKPreferenceJSONKeyes {
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *selected;
    __unsafe_unretained NSString *popular;
    __unsafe_unretained NSString *public;
    __unsafe_unretained NSString *code;
    __unsafe_unretained NSString *displayOrder;
    __unsafe_unretained NSString *categoryCode;
    __unsafe_unretained NSString *categoryConichiID;
} CNISDKPreferenceJSONKeyes;

extern const struct CNISDKPreferenceCategoryJSONKeyes {
    __unsafe_unretained NSString *code;
    __unsafe_unretained NSString *allowsCustomItems;
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *displayOrder;
    __unsafe_unretained NSString *parentCategoryConichiID;
    __unsafe_unretained NSString *categories;
} CNISDKPreferenceCategoryJSONKeyes;

extern const struct CNISDKPrivateCreditCardJSONKeyes {
    __unsafe_unretained NSString *lastFourDigits;
    __unsafe_unretained NSString *brand;
    __unsafe_unretained NSString *useCase;
    __unsafe_unretained NSString *externalIdentifier;
    __unsafe_unretained NSString *address;
} CNISDKPrivateCreditCardJSONKeyes;

extern const struct CNISDKRegionJSONKeyes {
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *beacons;
} CNISDKRegionJSONKeyes;

extern const struct CNISDKTrackinJSONKeyes {
    __unsafe_unretained NSString *status;
    __unsafe_unretained NSString *associatedRegion;
} CNISDKTrackinJSONKeyes;

extern const struct CNISDKTravelDocumentJSONKeyes {
    __unsafe_unretained NSString *number;
    __unsafe_unretained NSString *type;
    __unsafe_unretained NSString *authority;
    __unsafe_unretained NSString *dateOfIssue;
    __unsafe_unretained NSString *dateOfExpiry;
} CNISDKTravelDocumentJSONKeyes;

extern const struct CNISDKVenueJSONKeyes {
    __unsafe_unretained NSString *major;
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *status;
    __unsafe_unretained NSString *numberOfStars;
    __unsafe_unretained NSString *photoPath;
    __unsafe_unretained NSString *paymentEnabled;
    __unsafe_unretained NSString *phone;
    __unsafe_unretained NSString *formattedPhone;
    __unsafe_unretained NSString *website;
    __unsafe_unretained NSString *email;
    __unsafe_unretained NSString *welcomeMessage;
    __unsafe_unretained NSString *farewellMessage;
    __unsafe_unretained NSString *longitude;
    __unsafe_unretained NSString *latitude;
    __unsafe_unretained NSString *regions;
    __unsafe_unretained NSString *cards;
    __unsafe_unretained NSString *address;
    __unsafe_unretained NSString *PMSIntegrated;
} CNISDKVenueJSONKeyes;

extern const struct CNISDKVenueCardJSONKeyes {
    __unsafe_unretained NSString *name;
    __unsafe_unretained NSString *footer;
    __unsafe_unretained NSString *headerImageURLString;
    __unsafe_unretained NSString *position;
    __unsafe_unretained NSString *sections;
    __unsafe_unretained NSString *iconImageURLString;
    __unsafe_unretained NSString *category;
} CNISDKVenueCardJSONKeyes;

extern const struct CNISDKVenueCardSectionJSONKeyes {
    __unsafe_unretained NSString *title;
    __unsafe_unretained NSString *content;
} CNISDKVenueCardSectionJSONKeyes;

extern const struct CNISDKPreferenceUpdateResultJSONKeyes {
    __unsafe_unretained NSString *preferenceConichiID;
    __unsafe_unretained NSString *succeeded;
    __unsafe_unretained NSString *error;
} CNISDKPreferenceUpdateResultJSONKeyes;

extern const struct CNISDKBusinessAddressJSONKeyes {
    __unsafe_unretained NSString *street;
    __unsafe_unretained NSString *city;
    __unsafe_unretained NSString *countryCode;
    __unsafe_unretained NSString *zip;
    __unsafe_unretained NSString *businessName;
} CNISDKBusinessAddressJSONKeyes;

extern const struct CNISDKCreditCardBusinessAddressJSONKeyes {
    __unsafe_unretained NSString *street;
    __unsafe_unretained NSString *city;
    __unsafe_unretained NSString *countryCode;
    __unsafe_unretained NSString *zip;
    __unsafe_unretained NSString *businessName;
} CNISDKCreditCardBusinessAddressJSONKeyes;

extern const struct CNISDKTaxInfoJSONKeyes {
    __unsafe_unretained NSString *cityOfBirth;
    __unsafe_unretained NSString *countryCodeOfBirth;
    __unsafe_unretained NSString *taxIdentificationNumber;
    __unsafe_unretained NSString *taxOfficeName;
} CNISDKTaxInfoJSONKeyes;
