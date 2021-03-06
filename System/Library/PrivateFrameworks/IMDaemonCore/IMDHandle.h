//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMDHandle : NSObject
{
    NSString *_id;	// 8 = 0x8
    NSString *_unformattedID;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    NSString *_personCentricID;	// 32 = 0x20
    NSString *_CNContactID;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *CNContactID; // @synthesize CNContactID=_CNContactID;
@property(retain, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_id;
@property(retain, nonatomic) NSString *personCentricID; // @synthesize personCentricID=_personCentricID;
- (_Bool)isBusiness;	// IMP=0x00000000000c749f
@property(readonly, retain, nonatomic) NSDictionary *handleInfo;
- (id)description;	// IMP=0x00000000000c73dc
- (unsigned long long)hash;	// IMP=0x00000000000c7392
- (_Bool)isBetterDefinedThan:(id)arg1;	// IMP=0x00000000000c7322
- (long long)compareIDs:(id)arg1;	// IMP=0x00000000000c72da
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c71b9
- (void)dealloc;	// IMP=0x00000000000c715a
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4;	// IMP=0x00000000000c70b8
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;	// IMP=0x00000000000c70a3

@end

