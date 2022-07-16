//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSString;

@interface IDSOTRSessionInfo : NSObject
{
    NSString *_token;	// 8 = 0x8
    _Bool _isNegotiating;	// 16 = 0x10
    _Bool _isReady;	// 17 = 0x11
    _Bool _isSuspended;	// 18 = 0x12
    double _lastStartTime;	// 24 = 0x18
    IMTimer *_negotiationTimer;	// 32 = 0x20
    unsigned int _negotiationCount;	// 40 = 0x28
    CDUnknownBlockType _otrTestBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000003f54f0
@property(copy, nonatomic) CDUnknownBlockType otrTestBlock; // @synthesize otrTestBlock=_otrTestBlock;
@property(nonatomic) unsigned int negotiationCount; // @synthesize negotiationCount=_negotiationCount;
@property(nonatomic) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) _Bool isNegotiating; // @synthesize isNegotiating=_isNegotiating;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void)setNegotiationTimer;	// IMP=0x00100000003f5020
- (void)_handleNegotiationTimeout;	// IMP=0x00100000003f46e0
- (void)removeNegotiationTimer;	// IMP=0x00100000003f44a0
- (void)dealloc;	// IMP=0x00100000003f4430
- (id)initWithToken:(id)arg1;	// IMP=0x00100000003f4370

@end

