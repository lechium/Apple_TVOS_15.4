//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFCancelerObserver-Protocol.h>

@interface PFCancelerObserver : NSObject <PFCancelerObserver>
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

+ (id)observerForCanceler:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001eecd
- (void).cxx_destruct;	// IMP=0x000000000001eebd
- (void)cancelerWasCanceled:(id)arg1;	// IMP=0x000000000001ee95
- (id)initWithCanceler:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001edbf
- (id)init;	// IMP=0x000000000001ed9a

@end

