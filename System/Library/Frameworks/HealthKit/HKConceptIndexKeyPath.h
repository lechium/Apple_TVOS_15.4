//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HKConceptIndexKeyPath : NSObject
{
    NSString *_fullKeyPath;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
}

+ (id)conceptIndexKeyPathWithFullKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f53eb
- (void).cxx_destruct;	// IMP=0x00000000000f5694
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSString *fullKeyPath; // @synthesize fullKeyPath=_fullKeyPath;
- (id)tail;	// IMP=0x00000000000f5638
- (id)head;	// IMP=0x00000000000f55f3
- (id)initWithFullKeyPath:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000f556a
- (id)init;	// IMP=0x00000000000f5371

@end

