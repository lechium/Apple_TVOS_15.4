//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSItemProviderReading-Protocol.h>
#import <Intents/NSItemProviderWriting-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INIntent, NSArray, NSData, NSString, NSUserActivity;

@interface INShortcut : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>
{
    NSData *_activityData;	// 8 = 0x8
    INIntent *_intent;	// 16 = 0x10
    NSUserActivity *_userActivity;	// 24 = 0x18
    INImage *_activityImage;	// 32 = 0x20
    NSString *_activitySubtitle;	// 40 = 0x28
    NSString *_activityBundleIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000285455
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x000000000012de69
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x000000000012de02
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x000000000012dd9b
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012dd2e
- (void).cxx_destruct;	// IMP=0x00000000002850e5
@property(readonly, copy, nonatomic) NSString *activityBundleIdentifier; // @synthesize activityBundleIdentifier=_activityBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *activitySubtitle; // @synthesize activitySubtitle=_activitySubtitle;
@property(readonly, copy, nonatomic) INImage *activityImage; // @synthesize activityImage=_activityImage;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000284f47
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000284cf9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000284cee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000284922
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *_associatedAppBundleIdentifier;
@property(readonly, nonatomic) NSString *_subtitle;
@property(readonly, nonatomic) NSString *_title;
@property(readonly, copy, nonatomic) NSData *activityData; // @synthesize activityData=_activityData;
- (id)shortcutWithActivityBundleIdentifier:(id)arg1;	// IMP=0x000000000028441a
- (id)shortcutWithActivityImage:(id)arg1;	// IMP=0x00000000002842fe
- (id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4;	// IMP=0x0000000000284042
- (id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000283e37
- (id)initWithUserActivity:(id)arg1;	// IMP=0x0000000000283e23
- (id)_initWithIntent:(id)arg1;	// IMP=0x0000000000283d99
- (id)initWithIntent:(id)arg1;	// IMP=0x0000000000283d14
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012dc82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

