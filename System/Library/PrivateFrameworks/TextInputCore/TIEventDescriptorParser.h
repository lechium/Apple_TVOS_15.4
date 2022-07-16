//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TIEventDescriptorParser
{
}

- (id)parseBooleanFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;	// IMP=0x0000000000166c0d
- (id)parseFloatFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;	// IMP=0x0000000000166a4e
- (id)parseIntegerFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;	// IMP=0x0000000000166898
- (id)parseStringFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;	// IMP=0x0000000000166499
- (void)parseFieldDescriptor:(id *)arg1 andFieldSpec:(id *)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5;	// IMP=0x000000000016609f
- (void)parseEventDescriptor:(id *)arg1 andEventSpec:(id *)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5;	// IMP=0x00000000001659f7
- (void)parseEventDescriptors:(id)arg1 andEventSpecs:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4;	// IMP=0x00000000001655f9
- (id)init;	// IMP=0x00000000001655c5

@end

