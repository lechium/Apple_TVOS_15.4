//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSCopying-Protocol.h>
#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString, NSURL, SFNotificationError;

@interface SFNotificationInfo : NSObject <NSSecureCoding, NSCopying>
{
    SFNotificationInfo *_cachedMediumBubbleVersion;	// 8 = 0x8
    unsigned char _deviceClass;	// 16 = 0x10
    unsigned char _interactionBehavior;	// 17 = 0x11
    unsigned char _interactionDirection;	// 18 = 0x12
    unsigned int _notificationType;	// 20 = 0x14
    NSURL *_attachmentURL;	// 24 = 0x18
    NSString *_body;	// 32 = 0x20
    SFNotificationError *_error;	// 40 = 0x28
    NSString *_header;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    unsigned long long _homePodType;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008d995
- (void).cxx_destruct;	// IMP=0x000000000008e493
@property(nonatomic) unsigned int notificationType; // @synthesize notificationType=_notificationType;
@property(nonatomic) unsigned long long homePodType; // @synthesize homePodType=_homePodType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned char interactionDirection; // @synthesize interactionDirection=_interactionDirection;
@property(nonatomic) unsigned char interactionBehavior; // @synthesize interactionBehavior=_interactionBehavior;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) SFNotificationError *error; // @synthesize error=_error;
@property(nonatomic) unsigned char deviceClass; // @synthesize deviceClass=_deviceClass;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSURL *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(readonly, nonatomic) SFNotificationInfo *mediumBubbleVersion;
- (id)description;	// IMP=0x000000000008dfbe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008de5c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008dbfe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008d99d

@end

