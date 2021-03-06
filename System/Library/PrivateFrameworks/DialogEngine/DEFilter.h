//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DEMatchCriteria;

@interface DEFilter : NSObject
{
    DEMatchCriteria *_include;	// 8 = 0x8
    DEMatchCriteria *_exclude;	// 16 = 0x10
}

+ (id)deprecatedCatSummary;	// IMP=0x00000000001c8606
+ (id)catUpdates;	// IMP=0x00000000001c85eb
+ (id)catUpdates:(id)arg1;	// IMP=0x00000000001c81a6
+ (id)filterThroughPb:(id)arg1;	// IMP=0x00000000001c8100
+ (void)filterToPb:(id)arg1 filterPb:(void *)arg2;	// IMP=0x00000000001c7f94
+ (id)filterFromPb:(const void *)arg1;	// IMP=0x00000000001c7eb8
- (void).cxx_destruct;	// IMP=0x00000000001c91ab
@property(retain, nonatomic) DEMatchCriteria *exclude; // @synthesize exclude=_exclude;
@property(retain, nonatomic) DEMatchCriteria *include; // @synthesize include=_include;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c8fb9
- (_Bool)apply:(CDUnknownBlockType)arg1 to:(id)arg2;	// IMP=0x00000000001c87de
- (_Bool)allows:(id)arg1;	// IMP=0x00000000001c8764
- (id)init;	// IMP=0x00000000001c874d
- (id)initWithInclude:(id)arg1 exclude:(id)arg2;	// IMP=0x00000000001c8687

@end

