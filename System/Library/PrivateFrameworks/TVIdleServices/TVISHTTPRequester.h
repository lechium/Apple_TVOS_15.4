//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVISHTTPRequester : NSObject
{
}

+ (void)_updateETagForURLResponse:(id)arg1;	// IMP=0x0000000000004e70
+ (id)_lastETagForURL:(id)arg1;	// IMP=0x0000000000004d20
+ (id)conditionalDataTaskForURL:(id)arg1 localTargetFileURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003eb0
+ (id)cacheServerDownloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003d50
+ (id)userAgent;	// IMP=0x0000000000003cd0
+ (id)cachingServerSession;	// IMP=0x0000000000003b80

@end

