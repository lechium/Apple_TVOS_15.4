//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBUserActivityData-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding>
{
    NSString *_activityType;	// 8 = 0x8
    NSArray *_userInfos;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000585e7
@property(copy, nonatomic) NSArray *userInfos; // @synthesize userInfos=_userInfos;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000582c5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000058207
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000057eb4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057baa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000057a3f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000057a32
- (id)userInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000057a15
- (unsigned long long)userInfoCount;	// IMP=0x00000000000579f8
- (void)addUserInfo:(id)arg1;	// IMP=0x000000000005797e
- (void)clearUserInfo;	// IMP=0x0000000000057961
- (void)setUserInfo:(id)arg1;	// IMP=0x000000000005792d
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001a5ee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

