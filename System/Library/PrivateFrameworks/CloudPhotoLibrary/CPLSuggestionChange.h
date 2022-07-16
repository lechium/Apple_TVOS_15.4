//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLSuggestionRecordList, NSData, NSDate, NSString;

@interface CPLSuggestionChange
{
    unsigned short _type;	// 8 = 0x8
    unsigned short _subtype;	// 10 = 0xa
    unsigned short _notificationState;	// 12 = 0xc
    unsigned short _state;	// 14 = 0xe
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    CPLSuggestionRecordList *_recordList;	// 32 = 0x20
    NSDate *_creationDate;	// 40 = 0x28
    long long _version;	// 48 = 0x30
    NSDate *_activationDate;	// 56 = 0x38
    NSDate *_relevantUntilDate;	// 64 = 0x40
    NSDate *_expungeDate;	// 72 = 0x48
    NSData *_actionData;	// 80 = 0x50
    NSData *_featuresData;	// 88 = 0x58
}

+ (id)_createTestSuggestionWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;	// IMP=0x000000000004340a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005a922
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;	// IMP=0x000000000005a8b0
- (void).cxx_destruct;	// IMP=0x0000000000043346
@property(copy, nonatomic) NSData *featuresData; // @synthesize featuresData=_featuresData;
@property(copy, nonatomic) NSData *actionData; // @synthesize actionData=_actionData;
@property(copy, nonatomic) NSDate *expungeDate; // @synthesize expungeDate=_expungeDate;
@property(copy, nonatomic) NSDate *relevantUntilDate; // @synthesize relevantUntilDate=_relevantUntilDate;
@property(copy, nonatomic) NSDate *activationDate; // @synthesize activationDate=_activationDate;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) unsigned short state; // @synthesize state=_state;
@property(nonatomic) unsigned short notificationState; // @synthesize notificationState=_notificationState;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) CPLSuggestionRecordList *recordList; // @synthesize recordList=_recordList;
@property(nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;	// IMP=0x000000000004311a
- (id)propertiesDescription;	// IMP=0x00000000000430d0
- (_Bool)supportsDirectDeletion;	// IMP=0x00000000000430c8
- (_Bool)supportsDeletion;	// IMP=0x00000000000430c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000599e9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000598ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000598a8
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067754
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000066f74
- (id)scopedIdentifiersForMapping;	// IMP=0x0000000000066906

@end

