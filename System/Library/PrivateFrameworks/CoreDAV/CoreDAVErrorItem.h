//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem
{
    CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;	// 56 = 0x38
    CoreDAVItemWithNoChildren *_validSyncToken;	// 64 = 0x40
    CoreDAVItemWithNoChildren *_noUIDConflict;	// 72 = 0x48
    CoreDAVItemWithNoChildren *_validAddressData;	// 80 = 0x50
    CoreDAVItemWithNoChildren *_maxResourceSize;	// 88 = 0x58
    CoreDAVItemWithNoChildren *_uid;	// 96 = 0x60
    CoreDAVItemWithNoChildren *_ctagOkay;	// 104 = 0x68
    CoreDAVItemWithNoChildren *_maxImageSize;	// 112 = 0x70
    CoreDAVItemWithNoChildren *_invalidImageType;	// 120 = 0x78
    CoreDAVItemWithNoChildren *_imageError;	// 128 = 0x80
    CoreDAVItemWithNoChildren *_guardianRestricted;	// 136 = 0x88
    CoreDAVItemWithNoChildren *_maxAttendees;	// 144 = 0x90
    CoreDAVItemWithNoChildren *_quotaExceeded;	// 152 = 0x98
    CoreDAVItemWithNoChildren *_maxResources;	// 160 = 0xa0
    CoreDAVItemWithNoChildren *_validTimezone;	// 168 = 0xa8
    CoreDAVItemWithNoChildren *_validSplit;	// 176 = 0xb0
    CoreDAVLeafItem *_status;	// 184 = 0xb8
}

+ (id)copyParseRules;	// IMP=0x000000000002131d
- (void).cxx_destruct;	// IMP=0x00000000000221d0
@property(retain, nonatomic) CoreDAVLeafItem *status; // @synthesize status=_status;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *guardianRestricted; // @synthesize guardianRestricted=_guardianRestricted;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validSplit; // @synthesize validSplit=_validSplit;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validTimezone; // @synthesize validTimezone=_validTimezone;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxResources; // @synthesize maxResources=_maxResources;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *quotaExceeded; // @synthesize quotaExceeded=_quotaExceeded;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxAttendees; // @synthesize maxAttendees=_maxAttendees;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *imageError; // @synthesize imageError=_imageError;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *invalidImageType; // @synthesize invalidImageType=_invalidImageType;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *ctagOkay; // @synthesize ctagOkay=_ctagOkay;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *maxResourceSize; // @synthesize maxResourceSize=_maxResourceSize;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validAddressData; // @synthesize validAddressData=_validAddressData;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *noUIDConflict; // @synthesize noUIDConflict=_noUIDConflict;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *validSyncToken; // @synthesize validSyncToken=_validSyncToken;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits; // @synthesize numberOfMatchesWithinLimits=_numberOfMatchesWithinLimits;
- (id)description;	// IMP=0x0000000000020bc4
- (id)init;	// IMP=0x0000000000020b9e

@end

