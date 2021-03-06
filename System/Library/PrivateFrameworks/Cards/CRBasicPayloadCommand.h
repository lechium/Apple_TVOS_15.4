//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Cards/CRPayloadCommand-Protocol.h>

@class NSDictionary, NSString;
@protocol NSSecureCoding><NSCopying;

@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand>
{
    id <NSSecureCoding><NSCopying> payload;	// 8 = 0x8
    NSDictionary *userInfo;	// 16 = 0x10
    unsigned long long commandDirection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001b96
@property(nonatomic) unsigned long long commandDirection; // @synthesize commandDirection;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) id <NSSecureCoding><NSCopying> payload; // @synthesize payload;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001a4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

