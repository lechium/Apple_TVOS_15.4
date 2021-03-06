//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol SecKeyProxyProtocol
- (void)performOperation:(long long)arg1 algorithm:(NSString *)arg2 parameters:(NSArray *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)getPublicKey:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)getAlgorithmIDWithReply:(void (^)(long long))arg1;
- (void)getDescriptionWithReply:(void (^)(NSString *))arg1;
- (void)getExternalRepresentationWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)getAttributesWithReply:(void (^)(NSDictionary *))arg1;
- (void)getBlockSizeWithReply:(void (^)(unsigned long long))arg1;
- (void)initializeWithReply:(void (^)(NSData *))arg1;
@end

