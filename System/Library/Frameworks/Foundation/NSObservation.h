//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObservation : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000708e8
- (void)remove;	// IMP=0x00000000000708e2
- (id *)_observerStorage;	// IMP=0x00000000000708d9
- (void *)_observerStorageOfSize:(unsigned long long)arg1;	// IMP=0x00000000000708d0
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;	// IMP=0x00000000000708c7
- (id)initWithObservable:(id)arg1 observer:(id)arg2;	// IMP=0x00000000000708be

@end

