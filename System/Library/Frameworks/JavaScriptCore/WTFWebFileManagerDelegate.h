//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <JavaScriptCore/NSFileManagerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WTFWebFileManagerDelegate : NSObject <NSFileManagerDelegate>
{
}

- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4;	// IMP=0x00000000011da240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

