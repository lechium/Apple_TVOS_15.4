//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHMecabraWrapper : NSObject
{
    struct __Mecabra *_mecabra;	// 8 = 0x8
}

@property(readonly) struct __Mecabra *mecabra; // @synthesize mecabra=_mecabra;
- (void)dealloc;	// IMP=0x000000000016d120
- (void)initMecabraIfNeededWithType:(int)arg1 learningDictURL:(id)arg2;	// IMP=0x000000000016d0c0
- (id)init;	// IMP=0x000000000016d080

@end
