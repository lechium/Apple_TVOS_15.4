//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSection : NSObject <NSCopying>
{
    NSArray *_actions;	// 8 = 0x8
    NSString *_sectionID;	// 16 = 0x10
}

+ (id)actionsFromSections:(id)arg1;	// IMP=0x0000000000030790
- (void).cxx_destruct;	// IMP=0x0000000000030cdf
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)copyOfActions;	// IMP=0x0000000000030af7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030a9a
- (id)description;	// IMP=0x0000000000030a14
- (id)initWithActions:(id)arg1;	// IMP=0x000000000003094b

@end

