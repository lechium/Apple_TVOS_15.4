//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OTOperationDependencies;

__attribute__((visibility("hidden")))
@interface OTWaitOnPriorityViews
{
    OTOperationDependencies *_operationDependencies;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001b771a
@property(retain) OTOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
- (void)groupStart;	// IMP=0x00100000001b7607
- (id)initWithDependencies:(id)arg1;	// IMP=0x00100000001b7599

@end
