//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSXPCCoding-Protocol.h>

@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_bundleId;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
    NSString *_sceneIdentifier;	// 32 = 0x20
}

+ (id)systemNavigationActionContextWithURL:(id)arg1;	// IMP=0x00000000006492ee
+ (id)systemNavigationActionContextWithTitle:(id)arg1 sceneIdentifier:(id)arg2;	// IMP=0x0000000000649266
+ (id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2;	// IMP=0x00000000006491de
+ (id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2;	// IMP=0x0000000000649147
- (void).cxx_destruct;	// IMP=0x00000000006496fe
@property(copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000006494c8
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000649340

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

