//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/NSCopying-Protocol.h>

@class NSString;

@interface TPSURLSessionACAuthContext : NSObject <NSCopying>
{
    NSString *_appIdentifier;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    NSString *_enviromentIdentifier;	// 24 = 0x18
    NSString *_interactivityMode;	// 32 = 0x20
}

+ (id)defaultContext;	// IMP=0x0000000000046b5b
- (void).cxx_destruct;	// IMP=0x0000000000046df4
@property(copy, nonatomic) NSString *interactivityMode; // @synthesize interactivityMode=_interactivityMode;
@property(copy, nonatomic) NSString *enviromentIdentifier; // @synthesize enviromentIdentifier=_enviromentIdentifier;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046c8c
- (id)initWithAppIdentifier:(id)arg1 enviromentIdentifier:(id)arg2 interactivity:(id)arg3;	// IMP=0x0000000000046bd5

@end

