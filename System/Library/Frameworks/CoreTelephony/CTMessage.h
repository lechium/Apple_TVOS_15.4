//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTPhoneNumber, CTXPCServiceSubscriptionContext, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol CTMessageAddress><NSCopying;

@interface CTMessage : NSObject
{
    NSObject<CTMessageAddress><NSCopying> *_sender;	// 8 = 0x8
    NSMutableArray *_recipients;	// 16 = 0x10
    NSMutableArray *_items;	// 24 = 0x18
    NSDictionary *_rawHeaders;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
    unsigned int _messageId;	// 48 = 0x30
    int _messageType;	// 52 = 0x34
    CTPhoneNumber *_serviceCenter;	// 56 = 0x38
    NSString *_subject;	// 64 = 0x40
    NSString *_contentType;	// 72 = 0x48
    NSMutableDictionary *_contentTypeParams;	// 80 = 0x50
    unsigned int _replaceMessage;	// 88 = 0x58
    NSString *_countryCode;	// 96 = 0x60
    NSUUID *_uuid;	// 104 = 0x68
    _Bool _bypassSupportedMessageModesCheck;	// 112 = 0x70
    CTXPCServiceSubscriptionContext *_context;	// 120 = 0x78
    _Bool _replyEnabled;	// 128 = 0x80
    int _smsType;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x00000000000158ba
@property(nonatomic) int smsType; // @synthesize smsType=_smsType;
@property(readonly, nonatomic) _Bool replyEnabled; // @synthesize replyEnabled=_replyEnabled;
@property(copy, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool bypassSupportedMessageModesCheck; // @synthesize bypassSupportedMessageModesCheck=_bypassSupportedMessageModesCheck;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uuid;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly) unsigned int replaceMessage; // @synthesize replaceMessage=_replaceMessage;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly) NSDictionary *rawHeaders; // @synthesize rawHeaders=_rawHeaders;
@property(copy, nonatomic) NSObject<CTMessageAddress><NSCopying> *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) CTPhoneNumber *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned int messageId; // @synthesize messageId=_messageId;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSArray *recipients; // @synthesize recipients=_recipients;
- (void)setReplyEnabled:(_Bool)arg1;	// IMP=0x0000000000015759
- (void)setCountryCode:(id)arg1;	// IMP=0x0000000000015748
- (id)description;	// IMP=0x000000000001567f
- (id)allContentTypeParameterNames;	// IMP=0x0000000000015669
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;	// IMP=0x000000000001563e
- (id)contentTypeParameterWithName:(id)arg1;	// IMP=0x0000000000015628
- (void)removePartAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000155e8
- (id)addPart:(id)arg1;	// IMP=0x00000000000155b2
- (id)addData:(id)arg1 withContentType:(id)arg2;	// IMP=0x0000000000015522
- (id)addText:(id)arg1;	// IMP=0x0000000000015475
- (void)addEmailRecipient:(id)arg1;	// IMP=0x00000000000153f3
- (void)addPhoneRecipient:(id)arg1;	// IMP=0x00000000000153ab
- (void)setRecipients:(id)arg1;	// IMP=0x000000000001535e
- (void)setRecipient:(id)arg1;	// IMP=0x00000000000152ea
- (void)removeRecipientsInArray:(id)arg1;	// IMP=0x00000000000152cd
- (void)removeRecipient:(id)arg1;	// IMP=0x0000000000015283
- (void)addRecipient:(id)arg1;	// IMP=0x0000000000015163
- (void)setReplaceMessage:(unsigned int)arg1;	// IMP=0x000000000001515a
- (void)setRawHeaders:(id)arg1;	// IMP=0x000000000001510f
- (id)initWithDate:(id)arg1;	// IMP=0x00000000000150b2
- (id)init;	// IMP=0x0000000000014f99

@end

