//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (IC)
+ (id)ic_loggingDescriptionFromLoggable:(id)arg1 isPretty:(_Bool)arg2;	// IMP=0x000000000001281f
- (_Bool)ic_shouldIgnoreObserveValue:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x000000000000900c
- (void)ic_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x0000000000008f92
- (_Bool)ic_didAddObserverForContext:(void *)arg1 inScope:(char *)arg2;	// IMP=0x0000000000008ef0
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3 explicitOptions:(unsigned long long)arg4;	// IMP=0x0000000000008ed5
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3;	// IMP=0x0000000000008ebd
- (id)ic_loggingIdentifier;	// IMP=0x00000000000127fa
- (id)ic_prettyLoggingDescription;	// IMP=0x0000000000012789
- (id)ic_loggingDescription;	// IMP=0x000000000001271b
@end

