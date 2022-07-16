//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface SGURL : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _flags;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_receivedFromHandle;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    NSString *_groupIdentifier;	// 48 = 0x30
    NSString *_documentIdentifier;	// 56 = 0x38
    NSString *_documentTitle;	// 64 = 0x40
    NSDate *_documentDate;	// 72 = 0x48
    double _documentTimeInterval;	// 80 = 0x50
    NSDate *_receivedAt;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004b9d
- (void).cxx_destruct;	// IMP=0x0000000000004b28
@property(readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSDate *receivedAt; // @synthesize receivedAt=_receivedAt;
@property(readonly, nonatomic) double documentTimeInterval; // @synthesize documentTimeInterval=_documentTimeInterval;
@property(readonly, nonatomic) NSDate *documentDate; // @synthesize documentDate=_documentDate;
@property(readonly, nonatomic) NSString *documentTitle; // @synthesize documentTitle=_documentTitle;
@property(readonly, nonatomic) NSString *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *receivedFromHandle; // @synthesize receivedFromHandle=_receivedFromHandle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isEqualToURL:(id)arg1;	// IMP=0x000000000000477e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004716
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000045a5
- (unsigned long long)hash;	// IMP=0x000000000000455e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004432
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003fb1
- (id)nonFeedbackFlagDescription;	// IMP=0x0000000000003ebd
- (id)feedbackDescription;	// IMP=0x0000000000003e07
- (id)description;	// IMP=0x0000000000003d56
- (id)initWithURL:(id)arg1 title:(id)arg2 receivedFromHandle:(id)arg3 bundleIdentifier:(id)arg4 groupIdentifier:(id)arg5 documentIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 flags:(unsigned char)arg11;	// IMP=0x0000000000003bb0
- (id)init;	// IMP=0x0000000000003baa

@end
