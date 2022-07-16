//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/_LSQueryResolving-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSLocalQueryResolver : NSObject <_LSQueryResolving>
{
}

- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ec4a4
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ebee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

