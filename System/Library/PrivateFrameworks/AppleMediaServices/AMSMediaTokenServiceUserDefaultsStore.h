//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceUserDefaultsStore : NSObject
{
    NSString *_clientIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017a5db
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (_Bool)storeToken:(id)arg1;	// IMP=0x000000000017a251
- (id)retrieveToken;	// IMP=0x0000000000179e06
- (id)initWithClientIdentifier:(id)arg1;	// IMP=0x0000000000179d9b

@end

