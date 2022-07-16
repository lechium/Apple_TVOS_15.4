//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBAssertion, BSServiceConnectionEndpoint, NSArray, NSDictionary, NSString, NSURL;

@interface BBResponse : NSObject <NSSecureCoding>
{
    BBAssertion *_lifeAssertion;	// 8 = 0x8
    CDUnknownBlockType _sendBlock;	// 16 = 0x10
    NSString *_bulletinID;	// 24 = 0x18
    _Bool _sent;	// 32 = 0x20
    NSString *_replyText;	// 40 = 0x28
    _Bool _activated;	// 48 = 0x30
    _Bool _didOpenApplication;	// 49 = 0x31
    NSArray *_lifeAssertions;	// 56 = 0x38
    long long _actionType;	// 64 = 0x40
    NSString *_buttonID;	// 72 = 0x48
    NSString *_actionID;	// 80 = 0x50
    NSURL *_actionLaunchURL;	// 88 = 0x58
    NSString *_originID;	// 96 = 0x60
    unsigned long long _actionActivationMode;	// 104 = 0x68
    long long _actionBehavior;	// 112 = 0x70
    BSServiceConnectionEndpoint *_endpoint;	// 120 = 0x78
    NSDictionary *_context;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005410
- (void).cxx_destruct;	// IMP=0x0000000000005b6a
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) _Bool didOpenApplication; // @synthesize didOpenApplication=_didOpenApplication;
@property(copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) long long actionBehavior; // @synthesize actionBehavior=_actionBehavior;
@property(nonatomic) unsigned long long actionActivationMode; // @synthesize actionActivationMode=_actionActivationMode;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(copy, nonatomic) NSURL *actionLaunchURL; // @synthesize actionLaunchURL=_actionLaunchURL;
@property(copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property(copy, nonatomic) NSString *buttonID; // @synthesize buttonID=_buttonID;
@property(copy, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) NSArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005773
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005418
- (void)send;	// IMP=0x00000000000053c3

@end

