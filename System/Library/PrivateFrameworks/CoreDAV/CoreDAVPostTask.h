//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPostTask
{
}

- (void)finishCoreDAVTaskWithError:(id)arg1;	// IMP=0x0000000000026b57
- (id)httpMethod;	// IMP=0x0000000000026b4a
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;	// IMP=0x0000000000026aef

// Remaining properties
@property(nonatomic) __weak id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end
