//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphHolidayEdge
{
}

+ (id)filter;	// IMP=0x000000000056c8b1
- (unsigned short)domain;	// IMP=0x000000000056c8a6
- (id)label;	// IMP=0x000000000056c887
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x000000000056c86f
- (id)initFromDateNode:(id)arg1 toHolidayNode:(id)arg2;	// IMP=0x000000000056c840

@end
