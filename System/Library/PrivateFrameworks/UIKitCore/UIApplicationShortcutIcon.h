//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSXPCCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <BSXPCCoding, NSCopying>
{
    SBSApplicationShortcutIcon *_sbsShortcutIcon;	// 8 = 0x8
}

+ (id)iconWithCustomImage:(id)arg1 isTemplate:(_Bool)arg2;	// IMP=0x00000000000aa62c
+ (id)iconWithCustomImage:(id)arg1;	// IMP=0x00000000000aa618
+ (id)iconWithTemplateImageName:(id)arg1;	// IMP=0x00000000000aa4fc
+ (id)iconWithSystemImageName:(id)arg1;	// IMP=0x00000000000aa3e0
+ (id)iconWithType:(long long)arg1;	// IMP=0x00000000000aa224
- (void).cxx_destruct;	// IMP=0x00000000000aaa92
@property(readonly, nonatomic) SBSApplicationShortcutIcon *sbsShortcutIcon; // @synthesize sbsShortcutIcon=_sbsShortcutIcon;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000aa96d
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000aa952
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aa854
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa849
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;	// IMP=0x00000000000aa7de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

