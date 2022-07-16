//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)arg1;	// IMP=0x0000000000043106
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;	// IMP=0x0000000000042965
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;	// IMP=0x000000000004286f
- (_Bool)CDVIsSafeRedirectForRequestURL:(id)arg1;	// IMP=0x0000000000043e79
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;	// IMP=0x0000000000043db3
- (id)CDVFileSystemSafePath;	// IMP=0x0000000000043caf
- (_Bool)CDVIsEqualToURL:(id)arg1;	// IMP=0x0000000000043b90
- (id)CDVServerURLWithPath:(_Bool)arg1;	// IMP=0x0000000000043a3b
- (id)CDVServerURL;	// IMP=0x000000000004387c
- (id)CDVURLByDeletingLastPathComponent;	// IMP=0x00000000000437b2
- (id)CDVRawLastPathComponentPreservingEscapes;	// IMP=0x0000000000043762
- (id)CDVRawLastPathComponent;	// IMP=0x0000000000043691
- (id)CDVRawPath;	// IMP=0x0000000000043671
- (id)CDVPassword;	// IMP=0x0000000000043621
- (id)CDVURLWithPath:(id)arg1;	// IMP=0x00000000000434b1
- (id)CDVURLWithPassword:(id)arg1;	// IMP=0x0000000000043333
- (id)CDVURLWithUser:(id)arg1;	// IMP=0x00000000000431b5
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 query:(id)arg7 fragment:(id)arg8;	// IMP=0x0000000000042caa
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;	// IMP=0x0000000000042c7e
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(_Bool)arg7;	// IMP=0x0000000000042a2e
@end

