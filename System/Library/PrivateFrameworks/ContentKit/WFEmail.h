//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>

@class NSArray, NSData, NSString, WFEmailAddress;

@interface WFEmail : NSObject <NSCopying, NSSecureCoding, WFNaming>
{
    NSString *_subject;	// 8 = 0x8
    unsigned long long _subjectPrefix;	// 16 = 0x10
    WFEmailAddress *_sender;	// 24 = 0x18
    NSArray *_recipients;	// 32 = 0x20
    NSData *_identifier;	// 40 = 0x28
    NSString *_accountIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d2474
- (void).cxx_destruct;	// IMP=0x00000000000d240f
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) WFEmailAddress *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) unsigned long long subjectPrefix; // @synthesize subjectPrefix=_subjectPrefix;
@property(readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d2287
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d20c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d20bc
@property(readonly, copy, nonatomic) NSString *wfName;
- (void)fetchContentRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d201e
- (void)fetchAttachmentsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d200c
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 subject:(id)arg3 sender:(id)arg4 recipients:(id)arg5;	// IMP=0x00000000000d1e17

@end

