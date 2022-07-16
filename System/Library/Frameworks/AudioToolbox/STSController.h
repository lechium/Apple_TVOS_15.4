//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STSController : NSObject
{
    struct OpaqueFigSTS *_sts;	// 8 = 0x8
    struct unordered_map<std::string, STSPerLabelControllerState, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, STSPerLabelControllerState>>> _perLabelState;	// 16 = 0x10
    struct stack<unsigned long, std::deque<unsigned long>> _availableIndicesWithinSharedStorage;	// 56 = 0x38
    struct STSGlobalState _globalState;	// 112 = 0x70
    struct STSSharedStorage *_sharedStorage;	// 192 = 0xc0
}

+ (long long)maxNumberOfPerLabelStates;	// IMP=0x0000000000038275
- (id).cxx_construct;	// IMP=0x0000000000036d78
- (void).cxx_destruct;	// IMP=0x0000000000036cad
- (_Bool)updateGlobalState:(const struct STSGlobalState *)arg1 hasLock:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000036bd3
- (_Bool)updateLabel:(struct __CFString *)arg1 state:(const struct STSPerLabelState *)arg2 hasLock:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000036ab4
- (__hash_map_iterator_45d56b6f)ensureResourcesAllocatedForLabel:(struct __CFString *)arg1 error:(id *)arg2;	// IMP=0x00000000000363fe
- (_Bool)unlock:(struct _opaque_pthread_mutex_t *)arg1 error:(id *)arg2;	// IMP=0x00000000000362c9
- (_Bool)lock:(struct _opaque_pthread_mutex_t *)arg1 error:(id *)arg2;	// IMP=0x0000000000036194
- (_Bool)updateGlobalState:(const struct STSGlobalState *)arg1 labelStates:(const void *)arg2 error:(id *)arg3;	// IMP=0x0000000000036076
- (void)cleanupAllLabels;	// IMP=0x0000000000035ccc
- (void)cleanupLabel:(struct __CFString *)arg1;	// IMP=0x0000000000035a6e
- (_Bool)updateGlobalState:(struct STSGlobalState *)arg1 didChange:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00000000000359f3
- (_Bool)updateLabel:(struct __CFString *)arg1 state:(struct STSPerLabelState *)arg2 didChange:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000035977
- (void)dealloc;	// IMP=0x00000000000358db
- (id)initWithSTSObject:(struct OpaqueFigSTS *)arg1 error:(id *)arg2;	// IMP=0x000000000003531b

@end

