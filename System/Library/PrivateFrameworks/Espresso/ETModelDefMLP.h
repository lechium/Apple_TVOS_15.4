//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ETModelDefMLP
{
    int _input_size;	// 72 = 0x48
    int _hidden_size;	// 76 = 0x4c
    int _output_size;	// 80 = 0x50
}

@property int output_size; // @synthesize output_size=_output_size;
@property int hidden_size; // @synthesize hidden_size=_hidden_size;
@property int input_size; // @synthesize input_size=_input_size;
- (void)buildNetwork;	// IMP=0x000000000046beaa

@end

