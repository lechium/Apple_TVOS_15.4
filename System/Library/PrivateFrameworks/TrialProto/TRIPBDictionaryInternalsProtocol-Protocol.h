//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TRIPBCodedOutputStream, TRIPBFieldDescriptor;

@protocol TRIPBDictionaryInternalsProtocol
- (void)enumerateForTextFormat:(void (^)(id, id))arg1;
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;
- (void)writeToCodedOutputStream:(TRIPBCodedOutputStream *)arg1 asField:(TRIPBFieldDescriptor *)arg2;
- (unsigned long long)computeSerializedSizeAsField:(TRIPBFieldDescriptor *)arg1;
@end

