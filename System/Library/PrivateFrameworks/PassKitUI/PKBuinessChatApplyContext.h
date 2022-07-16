//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString;

@interface PKBuinessChatApplyContext : NSObject <PKBusinessChatContext>
{
    NSString *_identifier;	// 8 = 0x8
    long long _intent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005606d
- (id)bodyText;	// IMP=0x000000000005601c
- (_Bool)requiresAuthorization;	// IMP=0x0000000000056014
- (id)groupParameters;	// IMP=0x0000000000055f54
- (id)intentParameters;	// IMP=0x0000000000055ecb
- (id)businessIdentifier;	// IMP=0x0000000000055ebd
- (id)initWithIdentifier:(id)arg1 intent:(long long)arg2;	// IMP=0x0000000000055e47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

