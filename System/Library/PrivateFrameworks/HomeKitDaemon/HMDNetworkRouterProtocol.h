//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterProtocol : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _protocol;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b799a
+ (id)protocolFromTransportProtocol:(unsigned char)arg1;	// IMP=0x000000000044f975
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b7872
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b7821
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004b7807
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b76ab
- (id)initWithProtocol:(long long)arg1;	// IMP=0x00000000004b766e
- (id)init;	// IMP=0x00000000004b7632

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
