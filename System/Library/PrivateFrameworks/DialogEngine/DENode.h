//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DENode : NSObject
{
    shared_ptr_549d7737 _This;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000086d36
- (void).cxx_destruct;	// IMP=0x0000000000086d28
@property shared_ptr_549d7737 This; // @synthesize This=_This;
- (id)getGlobalId:(id)arg1;	// IMP=0x0000000000086b3f
@property(retain) NSString *conditionName;
- (id)getDialog;	// IMP=0x0000000000086730
- (_Bool)isOfType:(unsigned long long)arg1;	// IMP=0x00000000000864e8
- (shared_ptr_549d7737)getSharedPtr;	// IMP=0x00000000000864c6
- (id)initWithSharedPtr:(shared_ptr_549d7737)arg1;	// IMP=0x00000000000863de
- (id)init;	// IMP=0x0000000000086300

@end
