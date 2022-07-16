//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MCMXPCReply-Protocol.h"

@class MCMMetadata, MCMPOSIXUser, NSArray, NSDictionary, NSString, NSURL, NSUUID;

@protocol MCMXPCReplyWithContainer <MCMXPCReply>
- (id)initWithUUID:(NSUUID *)arg1 containerPathIdentifier:(NSString *)arg2 identifier:(NSString *)arg3 containerClass:(unsigned long long)arg4 POSIXUser:(MCMPOSIXUser *)arg5 personaUniqueString:(NSString *)arg6 sandboxToken:(const char *)arg7 existed:(_Bool)arg8 url:(NSURL *)arg9 info:(NSDictionary *)arg10 resolvedLinks:(NSArray *)arg11 transient:(_Bool)arg12;
- (id)initWithMetadata:(MCMMetadata *)arg1 sandboxToken:(const char *)arg2 includePath:(_Bool)arg3 includeInfo:(_Bool)arg4 resolvedLinks:(NSArray *)arg5;
@end

