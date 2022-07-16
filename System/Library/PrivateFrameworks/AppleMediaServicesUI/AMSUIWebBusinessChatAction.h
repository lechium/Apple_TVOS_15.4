//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebActionRunnable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebBusinessChatAction <AMSUIWebActionRunnable>
{
    NSString *_body;	// 8 = 0x8
    NSString *_businessID;	// 16 = 0x10
    NSString *_businessGroupID;	// 24 = 0x18
    NSString *_intentID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000411f4
@property(retain, nonatomic) NSString *intentID; // @synthesize intentID=_intentID;
@property(retain, nonatomic) NSString *businessGroupID; // @synthesize businessGroupID=_businessGroupID;
@property(retain, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
- (id)makeBusinessChatDeeplink;	// IMP=0x0000000000040e38
- (id)runAction;	// IMP=0x0000000000040cb1
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000040a8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

