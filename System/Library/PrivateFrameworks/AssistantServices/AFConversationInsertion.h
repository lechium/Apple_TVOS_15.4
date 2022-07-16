//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AceObject, NSIndexPath, NSString;

@interface AFConversationInsertion : NSObject
{
    _Bool _transient;	// 8 = 0x8
    _Bool _supplemental;	// 9 = 0x9
    _Bool _immersiveExperience;	// 10 = 0xa
    long long _conversationItemType;	// 16 = 0x10
    AceObject *_aceObject;	// 24 = 0x18
    NSString *_aceCommandIdentifier;	// 32 = 0x20
    NSIndexPath *_indexPath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015ca4a
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic, getter=isImmersiveExperience) _Bool immersiveExperience; // @synthesize immersiveExperience=_immersiveExperience;
@property(readonly, nonatomic, getter=isSupplemental) _Bool supplemental; // @synthesize supplemental=_supplemental;
@property(readonly, nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(readonly, copy, nonatomic) NSString *aceCommandIdentifier; // @synthesize aceCommandIdentifier=_aceCommandIdentifier;
@property(readonly, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(readonly, nonatomic) long long conversationItemType; // @synthesize conversationItemType=_conversationItemType;
- (id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 transient:(_Bool)arg4 supplemental:(_Bool)arg5 immersiveExperience:(_Bool)arg6 indexPath:(id)arg7;	// IMP=0x000000000015c908

@end

