//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPunchout-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFUserActivityData;

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isRunnableInBackground:1;
        unsigned int hasClip:1;
    } _has;	// 8 = 0x8
    _Bool _isRunnableInBackground;	// 12 = 0xc
    _Bool _hasClip;	// 13 = 0xd
    NSString *_name;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    NSArray *_urls;	// 40 = 0x28
    SFUserActivityData *_userActivityData;	// 48 = 0x30
    NSString *_actionTarget;	// 56 = 0x38
    NSURL *_cachedOpenableURL;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019b383
+ (id)punchoutWithURLs:(id)arg1;	// IMP=0x0000000000023455
+ (id)punchoutWithURL:(id)arg1;	// IMP=0x0000000000023387
- (void).cxx_destruct;	// IMP=0x000000000019b324
@property(retain, nonatomic) NSURL *cachedOpenableURL; // @synthesize cachedOpenableURL=_cachedOpenableURL;
@property(nonatomic) _Bool hasClip; // @synthesize hasClip=_hasClip;
@property(nonatomic) _Bool isRunnableInBackground; // @synthesize isRunnableInBackground=_isRunnableInBackground;
@property(copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property(retain, nonatomic) SFUserActivityData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019afdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019aef0
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019ada1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019acef
- (_Bool)hasHasClip;	// IMP=0x000000000019ace2
- (_Bool)hasIsRunnableInBackground;	// IMP=0x000000000019acca
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000007d80
- (_Bool)canOpenURL:(id)arg1;	// IMP=0x000000000002283f
@property(readonly, nonatomic) NSURL *preferredOpenableURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
