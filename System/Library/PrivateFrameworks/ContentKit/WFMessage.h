//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>

@class NSArray, NSString;

@interface WFMessage : NSObject <NSCopying, NSSecureCoding, WFNaming>
{
    NSString *_content;	// 8 = 0x8
    NSString *_conversationID;	// 16 = 0x10
    NSArray *_recipientContactIDs;	// 24 = 0x18
    NSArray *_recipients;	// 32 = 0x20
    NSString *_senderContactID;	// 40 = 0x28
    NSArray *_senderHandles;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d8a9
- (void).cxx_destruct;	// IMP=0x000000000002d855
@property(readonly, copy, nonatomic) NSArray *senderHandles; // @synthesize senderHandles=_senderHandles;
@property(readonly, copy, nonatomic) NSString *senderContactID; // @synthesize senderContactID=_senderContactID;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) NSArray *recipientContactIDs; // @synthesize recipientContactIDs=_recipientContactIDs;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d565
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d3e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d3da
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)initWithContent:(id)arg1 conversationID:(id)arg2 recipientContactIDs:(id)arg3 recipients:(id)arg4 senderContactID:(id)arg5 senderHandles:(id)arg6;	// IMP=0x000000000002d25a

@end

