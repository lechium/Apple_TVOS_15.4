//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString;

@interface SACFPEXQuickTypeItem
{
}

+ (id)quickTypeItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003684e
+ (id)quickTypeItem;	// IMP=0x000000000003683c
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSString *originatingWebsiteURL;
@property(copy, nonatomic) NSString *originatingBundleId;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSArray *itemFlags;
@property(copy, nonatomic) NSArray *fields;
- (id)encodedClassName;	// IMP=0x000000000003682f
- (id)groupIdentifier;	// IMP=0x000000000003681b

@end

