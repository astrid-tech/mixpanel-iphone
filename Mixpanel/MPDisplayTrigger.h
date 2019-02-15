#import <Foundation/Foundation.h>

extern NSString * const ANY_EVENT;

@interface MPDisplayTrigger : NSObject

@property (nonatomic, readonly) NSDictionary *jsonObject;
@property (nonatomic, readonly) NSString *event;
@property (nonatomic, readonly) NSDictionary *filters;

- (instancetype)init __unavailable;
- (instancetype)initWithJSONObject:(NSDictionary *)jsonObject;
- (BOOL)matchesEvent:(NSDictionary *)event;

@end
