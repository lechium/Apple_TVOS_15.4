//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/_LSDOpenProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface _LSDOpenClient <_LSDOpenProtocol>
{
}

- (void)failedToOpenApplication:(id)arg1 withURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b2573
- (void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b21ac
- (void)getiCloudHostNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b20ad
- (void)getURLOverrideForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b1ee7
- (void)canOpenURL:(id)arg1 publicSchemes:(_Bool)arg2 privateSchemes:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b1c88
- (void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000b1865
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b13ca
- (void)openApplicationWithIdentifier:(id)arg1 options:(id)arg2 useClientProcessHandle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b1211
- (void)performOpenOperationWithURL:(id)arg1 bundleIdentifier:(id)arg2 documentIdentifier:(id)arg3 isContentManaged:(_Bool)arg4 sourceAuditToken:(const CDStruct_4c969caf *)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000000000b0ee3
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000b0e4f

@end

