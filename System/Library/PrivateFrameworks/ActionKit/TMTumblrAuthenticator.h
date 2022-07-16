//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMTumblrAuthenticator : NSObject
{
    NSString *_OAuthConsumerKey;	// 8 = 0x8
    NSString *_OAuthConsumerSecret;	// 16 = 0x10
    CDUnknownBlockType _threeLeggedOAuthCallback;	// 24 = 0x18
    NSString *_threeLeggedOAuthTokenSecret;	// 32 = 0x20
}

+ (void)signRequest:(id)arg1 withParameters:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 token:(id)arg5 tokenSecret:(id)arg6;	// IMP=0x0000000000292633
+ (id)sharedInstance;	// IMP=0x0000000000292603
- (void).cxx_destruct;	// IMP=0x0000000000291eae
@property(copy, nonatomic) NSString *threeLeggedOAuthTokenSecret; // @synthesize threeLeggedOAuthTokenSecret=_threeLeggedOAuthTokenSecret;
@property(copy, nonatomic) CDUnknownBlockType threeLeggedOAuthCallback; // @synthesize threeLeggedOAuthCallback=_threeLeggedOAuthCallback;
@property(copy, nonatomic) NSString *OAuthConsumerSecret; // @synthesize OAuthConsumerSecret=_OAuthConsumerSecret;
@property(copy, nonatomic) NSString *OAuthConsumerKey; // @synthesize OAuthConsumerKey=_OAuthConsumerKey;
- (void)xAuth:(id)arg1 password:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000291b4d
- (_Bool)handleOpenURL:(id)arg1;	// IMP=0x00000000002916be
- (void)authenticate:(id)arg1 urlBlock:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000029145b

@end

