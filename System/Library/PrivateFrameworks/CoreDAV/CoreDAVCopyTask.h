//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask
{
}

- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;	// IMP=0x000000000004a429
- (_Bool)validate:(id *)arg1;	// IMP=0x000000000004a38a
- (void)dealloc;	// IMP=0x000000000004a34a
- (id)httpMethod;	// IMP=0x000000000004a33d

// Remaining properties
@property(nonatomic) __weak id <CoreDAVCopyTaskDelegate> delegate; // @dynamic delegate;

@end
