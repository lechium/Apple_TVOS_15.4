//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WFDefaultShortcutPersonalizationResult : NSObject
{
    NSArray *_personalizedDefaultShortcuts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001e488
@property(readonly, nonatomic) NSArray *personalizedDefaultShortcuts; // @synthesize personalizedDefaultShortcuts=_personalizedDefaultShortcuts;
- (void)enumerateWorkflowRecordsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e1ce
- (id)description;	// IMP=0x000000000001e12c
- (id)initWithPersonalizedDefaultShortcuts:(id)arg1;	// IMP=0x000000000001e029

@end

