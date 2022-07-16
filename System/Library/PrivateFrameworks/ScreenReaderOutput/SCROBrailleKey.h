//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject <NSSecureCoding>
{
    NSMutableArray *_maskArray;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _routerIndex;	// 24 = 0x18
    long long _routerToken;	// 32 = 0x20
    long long _routerLocation;	// 40 = 0x28
    _Bool _hasRouterInfo;	// 48 = 0x30
    id <NSSecureCoding> _appToken;	// 56 = 0x38
    int _displayToken;	// 64 = 0x40
    int _displayMode;	// 68 = 0x44
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002531c
- (void).cxx_destruct;	// IMP=0x0000000000025bfe
- (_Bool)getRouterIndex:(long long *)arg1 token:(long long *)arg2 location:(long long *)arg3 appToken:(id *)arg4;	// IMP=0x0000000000025bb4
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;	// IMP=0x0000000000025b93
- (id)identifier;	// IMP=0x000000000002591e
- (id)keyMasks;	// IMP=0x0000000000025910
- (void)addKeyMask:(unsigned int)arg1;	// IMP=0x00000000000258a3
- (id)description;	// IMP=0x00000000000257ee
- (int)displayMode;	// IMP=0x00000000000257e5
- (void)setDisplayMode:(int)arg1;	// IMP=0x00000000000257dc
- (int)displayToken;	// IMP=0x00000000000257d3
- (void)setDisplayToken:(int)arg1;	// IMP=0x00000000000257ca
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000256b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025324
- (id)init;	// IMP=0x00000000000252c6
- (void)addModifierMask:(unsigned int)arg1;	// IMP=0x0000000000011377
- (void)addSpacebarKeyMask;	// IMP=0x0000000000011360

@end

